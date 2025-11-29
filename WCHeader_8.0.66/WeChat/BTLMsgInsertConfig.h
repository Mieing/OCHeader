@interface BTLMsgInsertConfig : NSObject

@property (nonatomic) BOOL createNewGroup;
@property (nonatomic) BOOL topContact;
@property (nonatomic) BOOL canInsertToOldGroup;
@property (nonatomic) BOOL updateDividerLine;
@property (nonatomic) int atPos;
@property (nonatomic) unsigned int groupId;
@property (nonatomic) int predict;
@property (nonatomic) unsigned int limitMaxWeight;
@property (nonatomic) unsigned int createTime;

- (id)init;
- (id)description;

@end
