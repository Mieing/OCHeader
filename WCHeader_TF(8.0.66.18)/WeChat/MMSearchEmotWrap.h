@class NSString, NSData;

@interface MMSearchEmotWrap : NSObject

@property (nonatomic) unsigned int searchScene;
@property (retain, nonatomic) NSString *searchID;
@property (retain, nonatomic) NSString *docID;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned long long sourceType;
@property (nonatomic) unsigned int fromSearchType;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *encryptUrl;
@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *designerId;
@property (retain, nonatomic) NSString *designerName;
@property (retain, nonatomic) NSString *designerThumbUrl;
@property (retain, nonatomic) NSString *productID;
@property (retain, nonatomic) NSString *productName;
@property (retain, nonatomic) NSString *productUrl;
@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) NSString *sourceUrl;
@property (retain, nonatomic) NSString *sourceName;
@property (retain, nonatomic) NSData *imgData;
@property (nonatomic) BOOL disableAddSticker;
@property (nonatomic) BOOL isGenSticker;
@property (retain, nonatomic) NSString *weappUsrName;
@property (nonatomic) unsigned int weappVersion;
@property (copy, nonatomic) NSString *brandUserName;

- (id)emoticonWrap;
- (void).cxx_destruct;

@end
