@class AWEShareContext, NSArray, NSDictionary, NSString, AWEIMShareSendDataSource;

@interface AWEIMShareMessageSendRequest : NSObject

@property (retain, nonatomic) AWEIMShareSendDataSource *dataSource;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (copy, nonatomic) NSArray *shareList;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL createGroup;

- (void).cxx_destruct;

@end
