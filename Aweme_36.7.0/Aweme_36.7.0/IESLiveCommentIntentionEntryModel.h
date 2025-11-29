@class NSArray, NSString, NSDictionary, NSAttributedString;

@interface IESLiveCommentIntentionEntryModel : NSObject

@property (retain, nonatomic) NSArray *subItems;
@property (nonatomic) long long resultId;
@property (retain, nonatomic) NSAttributedString *entryTitle;
@property (nonatomic) long long entryType;
@property (copy, nonatomic) NSString *schemaEntryURL;
@property (copy, nonatomic) NSDictionary *extraDic;
@property (nonatomic) BOOL fromMemory;
@property (nonatomic) BOOL withPinyin;
@property (nonatomic) double showTime;

- (void).cxx_destruct;

@end
