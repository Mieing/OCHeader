@class NSString, NSURL, NSData, NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BDPODRFileTask : NSObject {
    id /* block */ _urlCompletion;
}

@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) id /* block */ dataCompletion;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void).cxx_destruct;
- (id)init;

@end
