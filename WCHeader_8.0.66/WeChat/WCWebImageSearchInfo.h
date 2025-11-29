@class NSString;

@interface WCWebImageSearchInfo : MMObject

@property (nonatomic) unsigned long long searchScene;
@property (retain, nonatomic) NSString *parentSearchId;
@property (retain, nonatomic) NSString *extInfo;
@property (nonatomic) BOOL skipImageUploading;
@property (retain, nonatomic) NSString *recommendQuery;
@property (retain, nonatomic) NSString *reportInfoFor33399;
@property (nonatomic) unsigned long long mpScene;
@property (nonatomic) unsigned long long mpView;
@property (nonatomic) unsigned long long mpEnterId;
@property (retain, nonatomic) NSString *mpSessionId;
@property (nonatomic) unsigned long long recommendQueryPullType;
@property (retain, nonatomic) NSString *reportSearchStatusInfoFor34875;
@property (retain, nonatomic) NSString *reportExtInfoFor34875;

+ (id)imageSearchInfoFromDictionary:(id)a0;

- (void)report34875WithActionType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
