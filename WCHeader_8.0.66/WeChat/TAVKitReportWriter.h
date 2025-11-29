@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TAVKitReportWriter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *directory;
@property (copy, nonatomic) NSString *encryptKey;

+ (id)instance;

- (id)init;
- (id)stroageDirectory;
- (void)setStrorageDirectory:(id)a0;
- (id)stroagePath;
- (void)writeReport:(id)a0 callback:(id /* block */)a1;
- (void)createDirectoryIfNeeded;
- (void).cxx_destruct;

@end
