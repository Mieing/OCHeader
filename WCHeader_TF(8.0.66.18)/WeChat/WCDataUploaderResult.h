@class NSString, NSArray;

@interface WCDataUploaderResult : NSObject

@property (nonatomic) long long uploadRetcode;
@property (nonatomic) long long uploadErrType;
@property (copy, nonatomic) NSString *uploadErrMsg;
@property (copy, nonatomic) NSArray *uploadErrTogetherUsernames;
@property (copy, nonatomic) NSString *uploadErrBtnUrl;
@property (copy, nonatomic) NSString *uploadErrBtnTitle;
@property (nonatomic) long long uploadErrSnsTipsCode;

- (id)description;
- (void).cxx_destruct;

@end
