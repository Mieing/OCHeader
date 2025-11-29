@class NSString, UrlStructV2, NSMutableArray;

@interface MvInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *id_p;
@property (nonatomic) BOOL hasId_p;
@property (retain, nonatomic) UrlStructV2 *iconURL;
@property (nonatomic) BOOL hasIconURL;
@property (nonatomic) int mvType;
@property (nonatomic) BOOL hasMvType;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (copy, nonatomic) NSString *lokiId;
@property (nonatomic) BOOL hasLokiId;
@property (nonatomic) BOOL isImageTemplate;
@property (nonatomic) BOOL hasIsImageTemplate;
@property (nonatomic) int mvUploadType;
@property (nonatomic) BOOL hasMvUploadType;
@property (nonatomic) BOOL enableAlienation;
@property (nonatomic) BOOL hasEnableAlienation;
@property (nonatomic) int provider;
@property (nonatomic) BOOL hasProvider;
@property (retain, nonatomic) NSMutableArray *featuresArray;
@property (readonly, nonatomic) unsigned long long featuresArray_Count;

+ (id)descriptor;

@end
