@class NSString;

@interface WCADQuestionItem : MMObject

@property (retain, nonatomic) NSString *itemId;
@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned int actionType;

- (void).cxx_destruct;

@end
