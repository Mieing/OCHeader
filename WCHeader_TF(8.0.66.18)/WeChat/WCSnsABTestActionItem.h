@class NSString, WCSnsABTestTitle;

@interface WCSnsABTestActionItem : NSObject {
    NSString *showTitleFormat;
    BOOL hasUserNameKey;
    BOOL hasSexKey;
    NSString *maleKey;
    NSString *femailKey;
    NSString *richTextKey;
}

@property (nonatomic) int actionType;
@property (retain, nonatomic) NSString *actionIndex;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) NSString *nextTipIndex;
@property (retain, nonatomic) WCSnsABTestTitle *abtestTitle;

- (id)init;
- (id)description;
- (long long)compareActionItemAscending:(id)a0;
- (void).cxx_destruct;

@end
