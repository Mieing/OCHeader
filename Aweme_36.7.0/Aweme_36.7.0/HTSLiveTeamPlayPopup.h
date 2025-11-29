@class NSString, NSMutableArray;

@interface HTSLiveTeamPlayPopup : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSMutableArray *highlightWordsArray;
@property (readonly, nonatomic) unsigned long long highlightWordsArray_Count;
@property (copy, nonatomic) NSString *buttonText;

+ (id)descriptor;

@end
