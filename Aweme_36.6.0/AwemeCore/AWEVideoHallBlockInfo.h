@class NSString, NSArray, NSDictionary, AWEVideoHallLynxInfo;

@interface AWEVideoHallBlockInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *blockId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long blockType;
@property (nonatomic) long long blockStyle;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSArray *blockItems;
@property (nonatomic) BOOL historyHasMore;
@property (nonatomic) BOOL useLynx;
@property (retain, nonatomic) AWEVideoHallLynxInfo *lynxInfo;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lynxInfoJSONTransformer;
+ (id)blockItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
