@class NSString;

@interface WCSnsABTestTitle : NSObject {
    NSString *showTitleFormat;
    BOOL hasUserNameKey;
    BOOL hasSexKey;
    NSString *maleKey;
    NSString *femailKey;
    NSString *defaultSexKey;
}

@property (retain, nonatomic) NSString *richTextKey;

- (id)init;
- (id)description;
- (BOOL)parseTitleFormat:(id)a0 priorTitleFormat:(id)a1;
- (BOOL)tryParseTitleFormat:(id)a0;
- (void).cxx_destruct;

@end
