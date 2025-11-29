@class NSString;

@interface AWEPOICommentTrackParams : NSObject <NSCopying>

@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiBackendType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *commentEnterFrom;
@property (copy, nonatomic) NSString *commentEnterMethod;
@property (nonatomic) long long shootPicCount;
@property (nonatomic) long long uploadPicCount;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) double clickUploadStartTime;
@property (nonatomic) long long picEdtingCount;
@property (nonatomic) BOOL hasEnterEdit;
@property (nonatomic) BOOL hasEnteredShootPage;
@property (copy, nonatomic) NSString *pageName;
@property (nonatomic) long long sourceType;
@property (nonatomic) unsigned long long enterType;
@property (copy, nonatomic) NSString *creationId;

- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
