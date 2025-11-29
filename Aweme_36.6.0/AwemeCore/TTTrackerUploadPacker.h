@interface TTTrackerUploadPacker : NSObject

+ (BOOL)packagingByLength;
+ (void)packagingEvents:(id)a0 options:(id)a1 withBlock:(id /* block */)a2;
+ (void)packagingEventsByLength:(id)a0 options:(id)a1 withBlock:(id /* block */)a2;

@end
