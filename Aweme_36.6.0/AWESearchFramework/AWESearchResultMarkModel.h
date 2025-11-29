@class NSString, UIImage, NSNumber, AWEImageAlbumBSModel;

@interface AWESearchResultMarkModel : AWEBaseApiModel <NSCopying>

@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *summary;
@property (retain, nonatomic) UIImage *originImage;
@property (nonatomic) long long state;
@property (nonatomic) long long cornerType;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasTopSpace;
@property (nonatomic) BOOL hitSecurity;
@property (nonatomic) long long marginTop;
@property (retain, nonatomic) NSString *answerType;
@property (retain, nonatomic) NSString *searchID;
@property (retain, nonatomic) NSNumber *ts;
@property (retain, nonatomic) NSString *conversationID;
@property (nonatomic) BOOL isSuperAgent;
@property (retain, nonatomic) AWEImageAlbumBSModel *imageModel;
@property (nonatomic) unsigned long long roundCount;
@property (nonatomic) BOOL hideCopilot;
@property (copy, nonatomic) NSString *pageName;

+ (id)imageModelJSONTransformer;
+ (double)defaultTopMarginHeight;
+ (id)JSONKeyPathsByPropertyKey;

- (double)topMarginHeight;
- (BOOL)isEuqalWithModel:(id)a0;
- (BOOL)isEqualWithString:(id)a0 secondString:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
