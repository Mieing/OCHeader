@class NSString;

@interface ZimInitRequest : NSObject

@property (retain, nonatomic) NSString *zimId;
@property (retain, nonatomic) NSString *channel;
@property (retain, nonatomic) NSString *merchant;
@property (retain, nonatomic) NSString *productName;
@property (retain, nonatomic) NSString *produceNode;
@property (retain, nonatomic) NSString *bizData;
@property (retain, nonatomic) NSString *metaInfo;
@property (retain, nonatomic) NSString *originAliyunEncToken;

- (void).cxx_destruct;

@end
