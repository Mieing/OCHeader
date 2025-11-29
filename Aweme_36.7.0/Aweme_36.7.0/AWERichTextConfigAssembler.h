@class AWEVideoPublishViewModel, NSString, APCDTORichText;

@interface AWERichTextConfigAssembler : NSObject <AWEVideoConfigAssembler>

@property (retain, nonatomic) APCDTORichText *config;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareOnCompletion:(id /* block */)a0;
- (id)initWithConfig:(id)a0 repository:(id)a1;
- (void).cxx_destruct;

@end
