@class NSString;

@interface IESGCPCGStandardizedLynxViewConfig : NSObject

@property (copy, nonatomic) NSString *cgLynxID;
@property (nonatomic) long long containerLevel;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) BOOL cacheEnabled;
@property (nonatomic) BOOL isTouchable;
@property (copy, nonatomic) NSString *businessTag;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long fallbackAction;
@property (nonatomic) long long containerType;
@property (nonatomic) long long containerOrientation;
@property (readonly, nonatomic) BOOL perfEnabled;

+ (id)configWithParams:(id)a0;

- (void).cxx_destruct;

@end
