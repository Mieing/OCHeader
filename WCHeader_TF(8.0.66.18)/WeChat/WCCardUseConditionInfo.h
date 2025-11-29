@class NSString, NSArray;

@interface WCCardUseConditionInfo : MMObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *outerTagList;
@property (retain, nonatomic) NSArray *innerTagList;
@property (retain, nonatomic) NSArray *detailField;

- (void).cxx_destruct;

@end
