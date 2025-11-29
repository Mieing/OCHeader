@class NSString, NSArray, NSMutableAttributedString;

@interface AWESearchCardParagraphTextModel : NSObject

@property (retain, nonatomic) NSString *descriptionString;
@property (retain, nonatomic) NSArray *textExtra;
@property (nonatomic) long long abstractType;
@property (nonatomic) long long sectionsType;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSString *shortAnswerString;
@property (retain, nonatomic) NSString *contentString;
@property (nonatomic) BOOL hasShortAnswer;
@property (nonatomic) long long suffixType;
@property (retain, nonatomic) NSMutableAttributedString *prefixAttributedString;

- (void).cxx_destruct;

@end
