@class AWECommentGeneralMusicModel, NSString, AWEAwemeModel, NSNumber, AWEUserModel;

@interface AWEMusicCommentService : HTSService <AWEMusicCommentService>

@property (retain, nonatomic) AWECommentGeneralMusicModel *commentModel;
@property (retain, nonatomic) AWEAwemeModel *mockedModel;
@property (readonly, nonatomic) NSNumber *commentCountTotal;
@property (readonly, nonatomic) NSString *itemID;
@property (readonly, nonatomic) AWEUserModel *author;
@property (readonly, nonatomic) AWEAwemeModel *awemeInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildServiceWithModel:(id)a0;
+ (id)createMusicCommentPanelConfigModel;

@end
