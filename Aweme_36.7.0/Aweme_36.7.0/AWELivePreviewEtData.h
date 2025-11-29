@class NSString;

@interface AWELivePreviewEtData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type_enter_room;
@property (copy, nonatomic) NSString *type_mob_params;
@property (copy, nonatomic) NSString *type_params;
@property (copy, nonatomic) NSString *type_first_room_params;
@property (copy, nonatomic) NSString *type_first_room_mob_params;
@property (copy, nonatomic) NSString *type_first_show_room_params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
