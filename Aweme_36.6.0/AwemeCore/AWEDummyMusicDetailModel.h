@class NSString, AWEMusicDiversionInfo;

@interface AWEDummyMusicDetailModel : NSObject

@property (retain, nonatomic) NSString *dummyMusicName;
@property (retain, nonatomic) NSString *dummyAuthorName;
@property (retain, nonatomic) NSString *dummyAvatarThumbUrl;
@property (retain, nonatomic) NSString *dummyPgcAuthor;
@property (retain, nonatomic) NSString *dummyPgcTitle;
@property (nonatomic) BOOL dummyIsOriginal;
@property (retain, nonatomic) NSString *dummyOwnerId;
@property (retain, nonatomic) NSString *dummyOwnerNickname;
@property (nonatomic) BOOL dummyHasEditor;
@property (nonatomic) BOOL dummyCanShowMatchedSong;
@property (nonatomic) BOOL enableOpt;
@property (nonatomic) BOOL isSimilarPage;
@property (retain, nonatomic) NSString *lunaSongID;
@property (nonatomic) long long diversionMediaType;
@property (nonatomic) BOOL miniLuna;
@property (retain, nonatomic) AWEMusicDiversionInfo *diversionInfo;

- (void)configDataWithParamDict:(id)a0;
- (void).cxx_destruct;

@end
