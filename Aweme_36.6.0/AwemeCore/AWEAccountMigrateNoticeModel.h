@class NSString, NSArray, NSAttributedString;

@interface AWEAccountMigrateNoticeModel : IESIMBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long migrateRejectStatus;
@property (copy, nonatomic) NSString *exportUserId;
@property (copy, nonatomic) NSString *importUserId;
@property (copy, nonatomic) NSArray *migrateTextArray;
@property (nonatomic) struct CGSize { double width; double height; } messageSize;
@property (copy, nonatomic) NSAttributedString *attributedContent;

+ (id)migrateTextArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)analyzeAccountMigrateMessage;
- (void).cxx_destruct;

@end
