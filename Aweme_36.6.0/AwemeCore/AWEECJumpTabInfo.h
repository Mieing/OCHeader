@class NSString, AWEECEnterMallConfigModel, NSDictionary;

@interface AWEECJumpTabInfo : MTLModel <MTLJSONSerializing, NSCopying>

@property (retain, nonatomic) NSString *itemId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *jumpURL;
@property (nonatomic) BOOL supportTab;
@property (nonatomic) BOOL supportSlide;
@property (retain, nonatomic) AWEECEnterMallConfigModel *guideConfig;
@property (retain, nonatomic) AWEECEnterMallConfigModel *slideConfig;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
