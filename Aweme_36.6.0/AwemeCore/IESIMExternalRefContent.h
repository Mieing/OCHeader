@class NSString, NSDictionary, IESIMExternalRefMateApplyInfo, IESIMExternalRefCoverURLModel;

@interface IESIMExternalRefContent : NSObject

@property (nonatomic) long long contentType;
@property (nonatomic) long long mappingAweType;
@property (nonatomic) long long coverHeight;
@property (nonatomic) long long coverWidth;
@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) unsigned long long sceneType;
@property (copy, nonatomic) NSString *refUid;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *contentTitle;
@property (copy, nonatomic) NSString *comment;
@property (copy, nonatomic) NSString *commentID;
@property (nonatomic) long long commentContentType;
@property (copy, nonatomic) IESIMExternalRefCoverURLModel *coverURL;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) IESIMExternalRefMateApplyInfo *mateApplyInfo;

+ (id)modelCustomPropertyMapper;
+ (id)instanceWithContentDict:(id)a0;

- (id)getContentDict;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
