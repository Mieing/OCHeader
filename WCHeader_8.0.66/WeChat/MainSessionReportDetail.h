@class NSString;

@interface MainSessionReportDetail : NSObject <YYModel>

@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned long long msgTime;
@property (nonatomic) long long position;
@property (nonatomic) long long subPos;
@property (nonatomic) long long unreadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
