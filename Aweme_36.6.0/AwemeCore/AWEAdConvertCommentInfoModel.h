@class NSString, AWEAdConvertCommentInfoExtraModel, NSNumber, AWEAdConvertCommentDetailModel;

@interface AWEAdConvertCommentInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL showConvertCommentTag;
@property (copy, nonatomic) NSString *convertCommentTagName;
@property (retain, nonatomic) NSNumber *convertCommentCount;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSNumber *productID;
@property (retain, nonatomic) NSNumber *fromKolID;
@property (retain, nonatomic) AWEAdConvertCommentDetailModel *convertCommentDetail;
@property (nonatomic) long long showNoticeSeconds;
@property (nonatomic) BOOL npsCommentTabOpt;
@property (nonatomic) BOOL landingPageShowComment;
@property (retain, nonatomic) AWEAdConvertCommentInfoExtraModel *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
