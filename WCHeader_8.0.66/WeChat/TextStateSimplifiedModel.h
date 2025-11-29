@class NSString, TextStateSimplifiedIcon;

@interface TextStateSimplifiedModel : NSObject

@property (retain, nonatomic) NSString *textStateId;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headImageUrl;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned int mediaType;
@property (retain, nonatomic) NSString *mediaThumbURL;
@property (nonatomic) int mediaWidth;
@property (nonatomic) int mediaHeight;
@property (retain, nonatomic) NSString *backgroundImageId;
@property (retain, nonatomic) TextStateSimplifiedIcon *icon;
@property (retain, nonatomic) NSString *sourceId;
@property (retain, nonatomic) NSString *sourceName;
@property (retain, nonatomic) NSString *sourceIconURL;
@property (nonatomic) unsigned long long option;
@property (retain, nonatomic) NSString *clusterId;
@property (retain, nonatomic) TextStateSimplifiedIcon *clusterIcon;
@property (nonatomic) BOOL isLiked;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (id)initWithTextState:(id)a0;
- (void).cxx_destruct;

@end
