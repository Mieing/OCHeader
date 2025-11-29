@class NSString, NSArray, AWEIMFTSResultHighlightInfo, IESIMFTSResultData;

@interface AWEIMFTSResultData : NSObject

@property (copy, nonatomic) NSString *content;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } highlightRange;
@property (retain, nonatomic) IESIMFTSResultData *result;
@property (retain, nonatomic) id object;
@property (nonatomic) BOOL isFuzzyResult;
@property (nonatomic) BOOL isSpaceSearchResult;
@property (retain, nonatomic) AWEIMFTSResultHighlightInfo *highlightInfo;
@property (copy, nonatomic) NSArray *subResult;
@property (copy, nonatomic) NSArray *keyElementList;
@property (copy, nonatomic) NSString *keyElement;

- (BOOL)isPinyin;
- (BOOL)isFirstLetter;
- (BOOL)isNickName;
- (BOOL)isShortId;
- (BOOL)isGroupParticipant;
- (BOOL)isGroupName;
- (BOOL)isMultiRecall;
- (void).cxx_destruct;
- (BOOL)isValid;
- (BOOL)isAlias;

@end
