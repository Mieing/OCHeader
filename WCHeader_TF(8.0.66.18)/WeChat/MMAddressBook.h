@class NSString, UIImage;

@interface MMAddressBook : NSObject

@property (retain, nonatomic) NSString *m_phone;
@property (retain, nonatomic) NSString *m_phoneLabel;
@property (retain, nonatomic) NSString *m_email;
@property (retain, nonatomic) NSString *m_nickname;
@property (retain, nonatomic) NSString *m_nicknamePinYin;
@property (retain, nonatomic) NSString *m_nicknamePinYinShort;
@property (retain, nonatomic) UIImage *m_image;

- (id)description;
- (long long)compareMMAddressBookAscending:(id)a0;
- (BOOL)copyFieldFromAddressBook:(id)a0;
- (void).cxx_destruct;

@end
