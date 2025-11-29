@class NSString, AWESharkLoadResult;

@interface AWESharkContainerLoadContext : NSObject

@property (retain, nonatomic) AWESharkLoadResult *result;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *loadType;
@property (copy, nonatomic) NSString *cardID;
@property (nonatomic) BOOL reuse;
@property (nonatomic) double loadStartedTs;
@property (nonatomic) double loadFinishedTs;

- (void).cxx_destruct;

@end
