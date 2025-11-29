@class NSString, NSURL;

@interface AWEIMIncentiveChatCellConfDetail : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSURL *iconURL;

- (id)dictionaryRawData;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
