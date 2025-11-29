@class NSString, NSMutableArray;

@interface WCCardBulkInfo : MMObject

@property (retain, nonatomic) NSMutableArray *cardDataList;
@property (retain, nonatomic) NSString *acceptButtonWording;
@property (nonatomic) unsigned int privateStatus;
@property (nonatomic) BOOL acceptButtonStatus;
@property (retain, nonatomic) NSString *privateWording;

- (void).cxx_destruct;

@end
