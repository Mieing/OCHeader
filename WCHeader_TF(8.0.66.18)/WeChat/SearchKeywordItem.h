@class NSString;

@interface SearchKeywordItem : NSObject {
    BOOL _regextMode;
}

@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSString *regexword;
@property (nonatomic) BOOL regexMode;
@property (nonatomic) BOOL isEnglishWord;

- (id)init;
- (void).cxx_destruct;

@end
