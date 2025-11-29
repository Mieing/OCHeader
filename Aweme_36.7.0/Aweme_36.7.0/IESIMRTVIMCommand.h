@class NSString, NSDictionary, NSDate;

@interface IESIMRTVIMCommand : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) NSDate *createdAt;
@property (copy, nonatomic) NSDictionary *content;

- (void).cxx_destruct;

@end
