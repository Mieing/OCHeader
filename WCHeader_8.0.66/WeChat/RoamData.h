@class CDNMediaListFile, NSString, CDNRoamFile, NSMutableArray;

@interface RoamData : WXPBGeneratedMessage

@property (nonatomic) unsigned long long key;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSString *contactName;
@property (retain, nonatomic) CDNRoamFile *index;
@property (retain, nonatomic) CDNRoamFile *msgContent;
@property (retain, nonatomic) NSMutableArray *mediaFile;
@property (nonatomic) unsigned long long beginTimeUs;
@property (nonatomic) unsigned long long endTimeUs;
@property (retain, nonatomic) CDNMediaListFile *mediaListFile;
@property (nonatomic) unsigned long long originMediaSize;
@property (nonatomic) unsigned long long curMediaSize;
@property (nonatomic) unsigned long long curTotalSize;
@property (nonatomic) unsigned long long updateTimeUs;

+ (void)initialize;

@end
