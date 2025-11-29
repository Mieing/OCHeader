@class MMListenSimplePlayableInfo, LocalRingToneSubDetail, NSString, NSArray, MusicRingToneSubDetail, WCFinderDataItem, WCFinderFeedContentVM, RingTone, FinderRingToneSubDetail, AnyPromise, RingBackDetail, RingBackTextStatusInfo;

@interface RingToneDetail : NSObject

@property (retain, nonatomic) AnyPromise *vibrateFilePromise;
@property (retain, nonatomic) RingBackDetail *ringDetail;
@property (retain, nonatomic) MMListenSimplePlayableInfo *tingInfo;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) MusicRingToneSubDetail *music;
@property (retain, nonatomic) FinderRingToneSubDetail *finder;
@property (retain, nonatomic) LocalRingToneSubDetail *local;
@property (retain, nonatomic) RingTone *core;
@property (copy, nonatomic) NSString *vibrateFileUrlStr;
@property (nonatomic) unsigned int vibrateFileVersion;
@property (readonly, nonatomic) NSArray *searchHitWords;
@property (retain, nonatomic) WCFinderDataItem *finderItem;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *authorDesc;
@property (readonly, copy, nonatomic) NSString *titleAndAuthor;
@property (nonatomic) BOOL hasVibrateFile;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL exposed;
@property (retain, nonatomic) WCFinderFeedContentVM *vm;
@property (retain, nonatomic) RingBackTextStatusInfo *verifyInfo;
@property (nonatomic) double startPlayVideoTime;
@property (nonatomic) BOOL jumpFromFriendRing;
@property (nonatomic) BOOL initFromFinderItem;
@property (nonatomic) double mediaHeight;
@property (nonatomic) unsigned long long requestID;
@property (nonatomic) unsigned long long searchID;

+ (id)WeChatDefaultRing;
+ (id)initFromRingBackPbDetail:(id)a0 ringBackPbCore:(id)a1 error:(id *)a2;

- (id)initFromPb:(id)a0;
- (id)initFromPb:(id)a0 core:(id)a1;
- (id)initFromFinder:(id)a0;
- (id)initFromLocalFile:(id)a0;
- (id)initAsInvalidPlaceHolder;
- (id)identifier;
- (void)dealloc;
- (id)cropedTempAudioFilePath;
- (id)genAudioFileTransferTaskWith:(id)a0;
- (id)promiseRingRawFilePath;
- (id)fetchFinderItemRawFilePath;
- (id)finderAudioFile;
- (id)fetchMusicRawFilePath;
- (id)concreteItem;
- (id)description;
- (BOOL)isAuthenticated;
- (void).cxx_destruct;

@end
