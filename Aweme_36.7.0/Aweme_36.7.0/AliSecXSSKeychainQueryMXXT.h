@class NSString, NSData;

@interface AliSecXSSKeychainQueryMXXT : NSObject

@property (copy, nonatomic) NSString *account;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *accessGroup;
@property (copy, nonatomic) NSData *passwordData;
@property (copy, nonatomic) NSString *password;

+ (id)errorWithCode:(int)a0;

- (BOOL)save:(id *)a0;
- (void).cxx_destruct;
- (id)query;
- (BOOL)fetch:(id *)a0;
- (BOOL)deleteItem:(id *)a0;
- (id)fetchAll:(id *)a0;

@end
