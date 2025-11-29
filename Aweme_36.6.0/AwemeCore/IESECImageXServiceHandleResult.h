@class NSArray, NSString, IESECImageXURLEditor;

@interface IESECImageXServiceHandleResult : NSObject <IESECImageXServiceHandleResultInterface>

@property (copy, nonatomic) NSArray *urlArray;
@property (retain, nonatomic) IESECImageXURLEditor *imageXURLEditor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
