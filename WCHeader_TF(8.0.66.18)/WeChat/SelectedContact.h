@class CContact;

@interface SelectedContact : NSObject

@property (retain, nonatomic) CContact *contact;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;

@end
