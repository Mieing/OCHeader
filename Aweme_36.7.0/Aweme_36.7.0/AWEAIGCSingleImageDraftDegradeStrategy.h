@class NSString;

@interface AWEAIGCSingleImageDraftDegradeStrategy : NSObject <AWEStudioDraftDegradeStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extractRelativePathFromFullPath:(id)a0;
+ (void)tryDegradeRecover:(id)a0 completion:(id /* block */)a1;


@end
