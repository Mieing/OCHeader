@class NSError, AWEVideoPublishViewModel;

@interface AWEPublishSaveDraftHandlerInputData : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *model;
@property (nonatomic) unsigned long long flowType;
@property (nonatomic) long long type;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
