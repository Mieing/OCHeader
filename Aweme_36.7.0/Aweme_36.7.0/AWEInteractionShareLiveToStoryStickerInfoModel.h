@class NSNumber, NSString;

@interface AWEInteractionShareLiveToStoryStickerInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *roomID;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
