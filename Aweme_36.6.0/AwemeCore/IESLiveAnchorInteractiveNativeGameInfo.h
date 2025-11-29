@class NSString, NSNumber, NSDictionary;

@interface IESLiveAnchorInteractiveNativeGameInfo : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isHasTask;
@property (nonatomic) BOOL isChangeTask;
@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *gameIcon;
@property (retain, nonatomic) NSNumber *taskID;
@property (copy, nonatomic) NSString *gameType;
@property (copy, nonatomic) NSString *taskName;
@property (copy, nonatomic) NSString *bidMetaTag;
@property (nonatomic) long long taskPrice;
@property (nonatomic) long long cpsRatio;
@property (retain, nonatomic) NSNumber *bidType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
