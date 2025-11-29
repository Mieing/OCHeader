@class NSString, AWERecordInspirationCategoryDetail;

@interface AWEInspirationSearchDetailModel : NSObject <NSCopying>

@property (retain, nonatomic) AWERecordInspirationCategoryDetail *searchDetailModel;
@property (retain, nonatomic) AWERecordInspirationCategoryDetail *detailModel;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *searchAttachedInfo;
@property (copy, nonatomic) NSString *statusMsg;
@property (nonatomic) long long statusCode;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
