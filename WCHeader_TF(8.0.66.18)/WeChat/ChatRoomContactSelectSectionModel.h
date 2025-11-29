@class NSString, NSArray;

@interface ChatRoomContactSelectSectionModel : MMObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *contactList;

- (void).cxx_destruct;

@end
