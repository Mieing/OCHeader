@class NSArray, NSString;

@interface AWEShareWaySortOperation : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long priority;
@property (nonatomic) long long strategy;
@property (nonatomic) long long targetIndex;
@property (nonatomic) BOOL stableSwap;
@property (copy, nonatomic) NSArray *relateChannels;
@property (retain, nonatomic) NSArray *relateChannelTypes;
@property (nonatomic) BOOL useLastRelate;
@property (retain, nonatomic) AWEShareWaySortOperation *fallbackOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fallbackOperationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
