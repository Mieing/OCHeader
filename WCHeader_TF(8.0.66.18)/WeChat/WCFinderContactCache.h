@class UIImage, WCFinderContact;

@interface WCFinderContactCache : NSObject

@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) UIImage *creatingHeadImage;
@property (nonatomic) BOOL hasSetLocation;
@property (nonatomic) BOOL hasSetSex;

- (id)init;
- (void)setCreatingNickName:(id)a0;
- (void)setCreatingSignature:(id)a0;
- (void)setNotShowLocation;
- (void)setShowLocationWithCountry:(id)a0 province:(id)a1 city:(id)a2;
- (void)setNotShowSex;
- (void)setShowSex:(long long)a0;
- (id)creatingNickName;
- (id)creatingSignature;
- (BOOL)isShowLocation;
- (id)locations;
- (BOOL)isShowSex;
- (int)sex;
- (void).cxx_destruct;

@end
