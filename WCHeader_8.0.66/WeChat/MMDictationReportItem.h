@class NSString, NSMutableArray;

@interface MMDictationReportItem : NSObject

@property (copy, nonatomic) NSString *chatName;
@property (retain, nonatomic) NSMutableArray *voiceList;
@property (nonatomic) BOOL userDidModifyText;
@property (copy, nonatomic) NSString *fullText;

- (id)voiceInfo:(id)a0;
- (void).cxx_destruct;

@end
