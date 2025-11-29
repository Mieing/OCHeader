@class NSArray, NSString, AWEIMMixImageMessage, NSDictionary, AWEIMMixPhotoConfigurationManager, AWEIMImageWaterFallItemUIConfig;

@interface AWEIMMixPhotoWaterFallPluralAvatarAndButtonCellViewModel : NSObject <AWEIMImageWaterFallItemProtocol>

@property (copy, nonatomic) NSArray *avatarURLs;
@property (copy, nonatomic) NSString *progressTitle;
@property (copy, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) AWEIMMixPhotoConfigurationManager *configurationManager;
@property (retain, nonatomic) AWEIMMixImageMessage *mixImageMessage;
@property (copy, nonatomic) id /* block */ presentOngoingMixDetailBlock;
@property (retain, nonatomic) NSDictionary *trackExtra;
@property (copy, nonatomic) id /* block */ clickTrackBlock;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWEIMImageWaterFallItemUIConfig *uiConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)tapActionBlock;
- (id)mainImageName;
- (BOOL)shouldDismissPreviousPage;
- (void)configAvatarURLsWithMessage:(id)a0;
- (id)fetchUsersInfoWithMixImageMessage:(id)a0;
- (id)initWithMixImageMessage:(id)a0 conversation:(id)a1 isCurrentUserParticipant:(BOOL)a2 trackExtra:(id)a3;
- (void).cxx_destruct;
- (id)text;
- (id)buttonText;
- (BOOL)isEqual:(id)a0;
- (id)mainImageURL;
- (id /* block */)buttonActionBlock;

@end
