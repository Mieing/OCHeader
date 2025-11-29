@class NSString;

@interface IESLiveFoundationSwift.LiveClosure : NSObject {
    void /* function */ block;
}

@property (nonatomic, readonly) id /* block */ block;
@property (nonatomic, readonly) NSString *description;

- (id)init:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
