@class NSArray, EcUserProfile;

@interface EcUpdateData : NSObject

@property (retain, nonatomic) NSArray *asset_list;
@property (retain, nonatomic) NSArray *tag_list;
@property (retain, nonatomic) EcUserProfile *user_profile;

+ (id)modelContainerPropertyGenericClass;

- (void).cxx_destruct;

@end
