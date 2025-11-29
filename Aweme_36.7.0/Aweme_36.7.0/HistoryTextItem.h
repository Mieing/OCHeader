@class NSNumber, NSString;

@interface HistoryTextItem : IESLivePBBaseMessage

@property (retain, nonatomic) NSNumber *localTimeStamp;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *userName;
@property (nonatomic) long long textType;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
