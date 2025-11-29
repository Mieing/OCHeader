@class NSString;

@interface IESIMGroupEntryQuestionSetEntryQuestionPageConfig : NSObject

@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *cancelBtnText;
@property (copy, nonatomic) NSString *confirmBtnText;
@property (copy, nonatomic) NSString *placeHolderText;
@property (nonatomic) long long maxInputLength;

+ (id)getIESIMGroupEntryQuestionSetEntryQuestionPageConfig;

- (void).cxx_destruct;

@end
