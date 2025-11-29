@class NSString;

@interface IESLiveVIPAfterLiveCardModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) long long anchorId;
@property (nonatomic) BOOL isMember;
@property (nonatomic) long long newRoomId;
@property (nonatomic) long long oldRoomId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortTouchInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;


@end
