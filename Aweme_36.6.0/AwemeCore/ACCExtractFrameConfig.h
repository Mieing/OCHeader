@class NSString, NSArray;
@protocol ACCExtractFrameTaskProtocol;

@interface ACCExtractFrameConfig : NSObject

@property (copy, nonatomic) NSString *bizId;
@property (nonatomic) unsigned long long subType;
@property (nonatomic) BOOL ignoreCache;
@property (nonatomic) BOOL pureMode;
@property (retain, nonatomic) id<ACCExtractFrameTaskProtocol> outerTask;
@property (copy, nonatomic) NSArray *metarials;
@property (nonatomic) unsigned long long materialsArrayType;

- (id)bizType;
- (void).cxx_destruct;

@end
