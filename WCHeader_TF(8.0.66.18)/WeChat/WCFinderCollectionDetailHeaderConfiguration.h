@class NSString, WCFinderAuthInfo;

@interface WCFinderCollectionDetailHeaderConfiguration : NSObject <UIContentConfiguration, WCFinderCollectionViewAbsoluteVerticalItem>

@property (nonatomic) double containerWidth;
@property (nonatomic) double itemHeight;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *thumbUrl;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) WCFinderAuthInfo *authInfo;
@property (copy, nonatomic) NSString *feedCountText;
@property (copy, nonatomic) NSString *updateAtText;
@property (copy, nonatomic) id /* block */ didTapNickNameLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)itemHeightWithLayoutEnvironment:(id)a0 context:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)makeContentView;
- (id)updatedConfigurationForState:(id)a0;
- (void).cxx_destruct;

@end
