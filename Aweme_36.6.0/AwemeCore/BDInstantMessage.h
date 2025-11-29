@class NSString;

@interface BDInstantMessage : NSObject

@property (nonatomic) unsigned long long instantMessageType;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *service;

- (void).cxx_destruct;

@end
